/**
 * \file
 * \brief SemaphoreTryWaitForFunctor class header
 *
 * \author Copyright (C) 2014-2015 Kamil Szczygiel http://www.distortec.com http://www.freddiechopin.info
 *
 * \par License
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0. If a copy of the MPL was not
 * distributed with this file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * \date 2015-01-12
 */

#ifndef INCLUDE_DISTORTOS_SYNCHRONIZATION_SEMAPHORETRYWAITFORFUNCTOR_HPP_
#define INCLUDE_DISTORTOS_SYNCHRONIZATION_SEMAPHORETRYWAITFORFUNCTOR_HPP_

#include "distortos/synchronization/SemaphoreFunctor.hpp"

#include "distortos/TickClock.hpp"

namespace distortos
{

namespace scheduler
{

/// SemaphoreTryWaitForFunctor class is a SemaphoreFunctor which calls Semaphore::tryWaitFor() with bounded duration
class SemaphoreTryWaitForFunctor : public synchronization::SemaphoreFunctor
{
public:

	/**
	 * \brief SemaphoreTryWaitForFunctor's constructor
	 *
	 * \param [in] duration is the bounded duration for Semaphore::tryWaitFor() call
	 */

	constexpr explicit SemaphoreTryWaitForFunctor(const TickClock::duration duration) :
			duration_{duration}
	{

	}

	/**
	 * \brief Calls Semaphore::tryWaitFor() with bounded duration
	 *
	 * \param [in] semaphore is a reference to Semaphore object for which Semaphore::tryWaitFor() will be called
	 *
	 * \return value returned by Semaphore::tryWaitFor()
	 */

	virtual int operator()(Semaphore& semaphore) const override;

private:

	/// bounded duration for Semaphore::tryWaitFor() call
	const TickClock::duration duration_;
};

}	// namespace scheduler

}	// namespace distortos

#endif	// INCLUDE_DISTORTOS_SYNCHRONIZATION_SEMAPHORETRYWAITFORFUNCTOR_HPP_

/*************************************************************************
 * Copyright (c) 2014 eProsima. All rights reserved.
 *
 * This copy of eProsima RTPS is licensed to you under the terms described in the
 * EPROSIMARTPS_LIBRARY_LICENSE file included in this distribution.
 *
 *************************************************************************/

/**
 * @file DiscoveredWriterData.h
 *
 *  Created on: Apr 8, 2014
 *      Author: Gonzalo Rodriguez Canosa
 *      email:  gonzalorodriguez@eprosima.com
 *              grcanosa@gmail.com  	
 */

#ifndef DISCOVEREDWRITERDATA_H_
#define DISCOVEREDWRITERDATA_H_

namespace eprosima {
namespace rtps {

class DiscoveredWriterData {
public:
	DiscoveredWriterData();
	virtual ~DiscoveredWriterData();
	WriterProxy_t m_writerProxy;
	InstanceHandle_t m_key;
	InstanceHandle_t m_participantKey;
	std::string m_typeName;
	std::string m_topicName;

	DurabilityQosPolicy m_durability;
	DurabilityServiceQosPolicy m_durabilityService;
	DeadlineQosPolicy m_deadline;
	LatencyBudgetQosPolicy m_latencyBudget;
	LivelinessQosPolicy m_liveliness;
	ReliabilityQosPolicy m_reliability;
	LifespanQosPolicy m_lifespan;
	UserDataQosPolicy m_userData;
	TimeBasedFilterQosPolicy m_timeBasedFilter;
	OwnershipQosPolicy m_ownership;
	OwnershipStrengthQosPolicy m_ownershipStrength;
	DestinationOrderQosPolicy m_destinationOrder;
	PresentationQosPolicy m_presentation;
	PartitionQosPolicy m_partition;
	TopicDataQosPolicy m_topicData;
	GroupDataQosPolicy m_groupData;



};

} /* namespace rtps */
} /* namespace eprosima */

#endif /* DISCOVEREDWRITERDATA_H_ */
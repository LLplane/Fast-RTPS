/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This generated file is licensed to you under the terms described in the
 * _LICENSE file included in this  distribution.
 *
 *************************************************************************
 * 
 * @file OwnershipTest.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _OwnershipTest_H_
#define _OwnershipTest_H_

// TODO Poner en el contexto.

#include <stdint.h>
#include <array>
#include <string>
#include <vector>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif
#else
#define eProsima_user_DllExport
#endif

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(OwnershipTest_SOURCE)
#define OwnershipTest_DllAPI __declspec( dllexport )
#else
#define OwnershipTest_DllAPI __declspec( dllimport )
#endif // OwnershipTest_SOURCE
#else
#define OwnershipTest_DllAPI
#endif
#else
#define OwnershipTest_DllAPI
#endif // _WIN32

namespace eprosima
{
    namespace fastcdr
    {
        class Cdr;
    }
}

/*!
 * @brief This class represents the structure ExampleMessage defined by the user in the IDL file.
 * @ingroup OWNERSHIPTEST
 */
class ExampleMessage
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport ExampleMessage();
    
    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~ExampleMessage();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object ExampleMessage that will be copied.
     */
    eProsima_user_DllExport ExampleMessage(const ExampleMessage &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object ExampleMessage that will be copied.
     */
    eProsima_user_DllExport ExampleMessage(ExampleMessage &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object ExampleMessage that will be copied.
     */
    eProsima_user_DllExport ExampleMessage& operator=(const ExampleMessage &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object ExampleMessage that will be copied.
     */
    eProsima_user_DllExport ExampleMessage& operator=(ExampleMessage &&x);
    
    /*!
     * @brief This function sets a value in member index
     * @param _index New value for member index
     */
    inline eProsima_user_DllExport void index(uint32_t _index)
    {
        m_index = _index;
    }

    /*!
     * @brief This function returns the value of member index
     * @return Value of member index
     */
    inline eProsima_user_DllExport uint32_t index() const
    {
        return m_index;
    }

    /*!
     * @brief This function returns a reference to member index
     * @return Reference to member index
     */
    inline eProsima_user_DllExport uint32_t& index()
    {
        return m_index;
    }
    /*!
     * @brief This function sets a value in member ownershipStrength
     * @param _ownershipStrength New value for member ownershipStrength
     */
    inline eProsima_user_DllExport void ownershipStrength(uint32_t _ownershipStrength)
    {
        m_ownershipStrength = _ownershipStrength;
    }

    /*!
     * @brief This function returns the value of member ownershipStrength
     * @return Value of member ownershipStrength
     */
    inline eProsima_user_DllExport uint32_t ownershipStrength() const
    {
        return m_ownershipStrength;
    }

    /*!
     * @brief This function returns a reference to member ownershipStrength
     * @return Reference to member ownershipStrength
     */
    inline eProsima_user_DllExport uint32_t& ownershipStrength()
    {
        return m_ownershipStrength;
    }
    /*!
     * @brief This function copies the value in member message
     * @param _message New value to be copied in member message
     */
    inline eProsima_user_DllExport void message(const std::string &_message)
    {
        m_message = _message;
    }

    /*!
     * @brief This function moves the value in member message
     * @param _message New value to be moved in member message
     */
    inline eProsima_user_DllExport void message(std::string &&_message)
    {
        m_message = std::move(_message);
    }

    /*!
     * @brief This function returns a constant reference to member message
     * @return Constant reference to member message
     */
    inline eProsima_user_DllExport const std::string& message() const
    {
        return m_message;
    }

    /*!
     * @brief This function returns a reference to member message
     * @return Reference to member message
     */
    inline eProsima_user_DllExport std::string& message()
    {
        return m_message;
    }
    
    /*!
     * @brief This function returns the maximum serialized size of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serialize(eprosima::fastcdr::Cdr &cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void deserialize(eprosima::fastcdr::Cdr &cdr);



    /*!
     * @brief This function returns the maximum serialized size of the Key of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(size_t current_alignment = 0);

    /*!
     * @brief This function tells you if the Key has been defined for this type
     */
    eProsima_user_DllExport static bool isKeyDefined();

    /*!
     * @brief This function serializes the key members of an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serializeKey(eprosima::fastcdr::Cdr &cdr) const;
    
private:
    uint32_t m_index;
    uint32_t m_ownershipStrength;
    std::string m_message;
};

#endif // _OwnershipTest_H_
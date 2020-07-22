//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSNumber, NSString;

@interface PKFelicaTransitAppletState : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _blacklisted;
    _Bool _inStation;
    _Bool _inShinkansenStation;
    _Bool _shinkansenTicketActive;
    _Bool _greenCarTicketUsed;
    _Bool _hasShinkansenTicket;
    _Bool _hasGreenCarTicket;
    _Bool _needsStationProcessing;
    NSNumber *_historySequenceNumber;
    NSNumber *_balance;
    NSNumber *_shinkansenValidityStartDate;
    NSNumber *_shinkansenValidityTerm;
    NSData *_shinkansenOriginStationCode;
    NSData *_shinkansenDestinationStationCode;
    NSNumber *_shinkansenDepartureTime;
    NSNumber *_shinkansenArrivalTime;
    NSString *_shinkansenTrainName;
    NSNumber *_shinkansenCarNumber;
    NSNumber *_shinkansenSeatRow;
    NSNumber *_shinkansenSeatNumber;
    NSData *_shinkansenSecondaryOriginStationCode;
    NSData *_shinkansenSecondaryDestinationStationCode;
    NSNumber *_shinkansenSecondaryDepartureTime;
    NSNumber *_shinkansenSecondaryArrivalTime;
    NSString *_shinkansenSecondaryTrainName;
    NSNumber *_shinkansenSecondaryCarNumber;
    NSNumber *_shinkansenSecondarySeatRow;
    NSNumber *_shinkansenSecondarySeatNumber;
    NSData *_greenCarOriginStationCode;
    NSData *_greenCarDestinationStationCode;
    NSNumber *_greenCarValidityStartDate;
    NSString *_shinkansenOriginStationString;
    NSString *_shinkansenDestinationStationString;
    NSString *_shinkansenSecondaryOriginStationString;
    NSString *_shinkansenSecondaryDestinationStationString;
    NSString *_greenCarOriginStationString;
    NSString *_greenCarDestinationStationString;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *greenCarDestinationStationString; // @synthesize greenCarDestinationStationString=_greenCarDestinationStationString;
@property(copy, nonatomic) NSString *greenCarOriginStationString; // @synthesize greenCarOriginStationString=_greenCarOriginStationString;
@property(copy, nonatomic) NSString *shinkansenSecondaryDestinationStationString; // @synthesize shinkansenSecondaryDestinationStationString=_shinkansenSecondaryDestinationStationString;
@property(copy, nonatomic) NSString *shinkansenSecondaryOriginStationString; // @synthesize shinkansenSecondaryOriginStationString=_shinkansenSecondaryOriginStationString;
@property(copy, nonatomic) NSString *shinkansenDestinationStationString; // @synthesize shinkansenDestinationStationString=_shinkansenDestinationStationString;
@property(copy, nonatomic) NSString *shinkansenOriginStationString; // @synthesize shinkansenOriginStationString=_shinkansenOriginStationString;
@property(nonatomic) _Bool needsStationProcessing; // @synthesize needsStationProcessing=_needsStationProcessing;
@property(nonatomic) _Bool hasGreenCarTicket; // @synthesize hasGreenCarTicket=_hasGreenCarTicket;
@property(copy, nonatomic) NSNumber *greenCarValidityStartDate; // @synthesize greenCarValidityStartDate=_greenCarValidityStartDate;
@property(copy, nonatomic) NSData *greenCarDestinationStationCode; // @synthesize greenCarDestinationStationCode=_greenCarDestinationStationCode;
@property(copy, nonatomic) NSData *greenCarOriginStationCode; // @synthesize greenCarOriginStationCode=_greenCarOriginStationCode;
@property(nonatomic) _Bool hasShinkansenTicket; // @synthesize hasShinkansenTicket=_hasShinkansenTicket;
@property(copy, nonatomic) NSNumber *shinkansenSecondarySeatNumber; // @synthesize shinkansenSecondarySeatNumber=_shinkansenSecondarySeatNumber;
@property(copy, nonatomic) NSNumber *shinkansenSecondarySeatRow; // @synthesize shinkansenSecondarySeatRow=_shinkansenSecondarySeatRow;
@property(copy, nonatomic) NSNumber *shinkansenSecondaryCarNumber; // @synthesize shinkansenSecondaryCarNumber=_shinkansenSecondaryCarNumber;
@property(copy, nonatomic) NSString *shinkansenSecondaryTrainName; // @synthesize shinkansenSecondaryTrainName=_shinkansenSecondaryTrainName;
@property(copy, nonatomic) NSNumber *shinkansenSecondaryArrivalTime; // @synthesize shinkansenSecondaryArrivalTime=_shinkansenSecondaryArrivalTime;
@property(copy, nonatomic) NSNumber *shinkansenSecondaryDepartureTime; // @synthesize shinkansenSecondaryDepartureTime=_shinkansenSecondaryDepartureTime;
@property(copy, nonatomic) NSData *shinkansenSecondaryDestinationStationCode; // @synthesize shinkansenSecondaryDestinationStationCode=_shinkansenSecondaryDestinationStationCode;
@property(copy, nonatomic) NSData *shinkansenSecondaryOriginStationCode; // @synthesize shinkansenSecondaryOriginStationCode=_shinkansenSecondaryOriginStationCode;
@property(copy, nonatomic) NSNumber *shinkansenSeatNumber; // @synthesize shinkansenSeatNumber=_shinkansenSeatNumber;
@property(copy, nonatomic) NSNumber *shinkansenSeatRow; // @synthesize shinkansenSeatRow=_shinkansenSeatRow;
@property(copy, nonatomic) NSNumber *shinkansenCarNumber; // @synthesize shinkansenCarNumber=_shinkansenCarNumber;
@property(copy, nonatomic) NSString *shinkansenTrainName; // @synthesize shinkansenTrainName=_shinkansenTrainName;
@property(copy, nonatomic) NSNumber *shinkansenArrivalTime; // @synthesize shinkansenArrivalTime=_shinkansenArrivalTime;
@property(copy, nonatomic) NSNumber *shinkansenDepartureTime; // @synthesize shinkansenDepartureTime=_shinkansenDepartureTime;
@property(copy, nonatomic) NSData *shinkansenDestinationStationCode; // @synthesize shinkansenDestinationStationCode=_shinkansenDestinationStationCode;
@property(copy, nonatomic) NSData *shinkansenOriginStationCode; // @synthesize shinkansenOriginStationCode=_shinkansenOriginStationCode;
@property(copy, nonatomic) NSNumber *shinkansenValidityTerm; // @synthesize shinkansenValidityTerm=_shinkansenValidityTerm;
@property(copy, nonatomic) NSNumber *shinkansenValidityStartDate; // @synthesize shinkansenValidityStartDate=_shinkansenValidityStartDate;
@property(copy, nonatomic) NSNumber *balance; // @synthesize balance=_balance;
@property(copy, nonatomic) NSNumber *historySequenceNumber; // @synthesize historySequenceNumber=_historySequenceNumber;
@property(nonatomic, getter=isGreenCarTicketUsed) _Bool greenCarTicketUsed; // @synthesize greenCarTicketUsed=_greenCarTicketUsed;
@property(nonatomic, getter=isShinkansenTicketActive) _Bool shinkansenTicketActive; // @synthesize shinkansenTicketActive=_shinkansenTicketActive;
@property(nonatomic, getter=isInShinkansenStation) _Bool inShinkansenStation; // @synthesize inShinkansenStation=_inShinkansenStation;
@property(nonatomic, getter=isInStation) _Bool inStation; // @synthesize inStation=_inStation;
@property(nonatomic, getter=isBlacklisted) _Bool blacklisted; // @synthesize blacklisted=_blacklisted;
- (void).cxx_destruct;
- (id)_concreteTransactionForRecordAtIndex:(unsigned long long)arg1 withBalance:(unsigned int *)arg2 historyRecords:(id)arg3 terminalState:(id)arg4 numberProcessed:(unsigned long long *)arg5 exitedShinkansen:(_Bool *)arg6;
- (void)_resolveTransactionsFromState:(id)arg1 toState:(id)arg2 withHistoryRecords:(id)arg3 concreteTransactions:(id *)arg4 ephemeralTransaction:(id *)arg5;
- (id)processUpdateWithAppletHistory:(id)arg1 concreteTransactions:(id *)arg2 ephemeralTransactions:(id *)arg3;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAppletHistory:(id)arg1;
- (id)init;

@end


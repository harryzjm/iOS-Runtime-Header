//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFCharacteristicValueOperationBatching-Protocol.h>
#import <Home/NAIdentifiable-Protocol.h>
#import <Home/NSCopying-Protocol.h>

@class HMCharacteristicMetadata, NAFuture, NSDictionary, NSSet, NSString;
@protocol HFCharacteristicValueSource;

@protocol HFAggregatedCharacteristicValueSource <HFCharacteristicValueOperationBatching, NAIdentifiable, NSCopying>
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource;
- (id)copyWithValueSource:(id <HFCharacteristicValueSource>)arg1;
- (NSSet *)allCharacteristicsForCharacteristicType:(NSString *)arg1;
- (HMCharacteristicMetadata *)metadataForCharacteristicType:(NSString *)arg1;
- (NAFuture *)writeValuesForCharacteristicTypes:(NSDictionary *)arg1;
- (NAFuture *)readValuesForCharacteristicTypes:(NSSet *)arg1;
@end

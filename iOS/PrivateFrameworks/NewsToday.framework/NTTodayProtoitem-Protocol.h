//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsToday/NFCopying-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol FCContentContext, NTSectionDescriptor, NTTodayItem, NTTodayResultOperationInfoProviding;

@protocol NTTodayProtoitem <NFCopying>
@property(readonly, copy, nonatomic) NSString *identifier;
- (id <NTTodayItem>)itemWithContentContext:(id <FCContentContext>)arg1 operationInfo:(id <NTTodayResultOperationInfoProviding>)arg2 sectionDescriptor:(id <NTSectionDescriptor>)arg3 assetFileURLsByRemoteURL:(NSMutableDictionary *)arg4 forLeadingCellAppearance:(_Bool)arg5 preferredDynamicSlotAllocation:(unsigned long long)arg6;
- (NSArray *)assetHandlesWithOperationInfo:(id <NTTodayResultOperationInfoProviding>)arg1 forLeadingCellAppearance:(_Bool)arg2;
@end

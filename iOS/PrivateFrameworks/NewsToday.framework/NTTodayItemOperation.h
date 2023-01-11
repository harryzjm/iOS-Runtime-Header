//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/FCOperation.h>

@class NSArray, NSDictionary, NSObject, NSSet, NTCatchUpOperationForYouFetchInfo;
@protocol FCContentContext, FCFeedPersonalizing, FCNewsAppConfiguration, NTTodayResultOperationInfoProviding;

@interface NTTodayItemOperation : FCOperation
{
    NSDictionary *_catchUpOperationResultsBySectionDescriptor;
    id <FCNewsAppConfiguration> _appConfiguration;
    id <FCContentContext> _contentContext;
    NSSet *_itemIDsOfLeadingCells;
    NSDictionary *_slotAllocationByDynamicSlotItemID;
    id <FCFeedPersonalizing> _feedPersonalizer;
    id <NTTodayResultOperationInfoProviding> _operationInfo;
    NTCatchUpOperationForYouFetchInfo *_forYouFetchInfo;
    CDUnknownBlockType _todayItemCompletion;
    NSArray *_feedItems;
    NSDictionary *_resultTodayItemsBySectionDescriptor;
    NSDictionary *_resultAssetFileURLsByRemoteURL;
    NSObject *_resultAssetsHoldToken;
}

@property(retain, nonatomic) NSObject *resultAssetsHoldToken; // @synthesize resultAssetsHoldToken=_resultAssetsHoldToken;
@property(retain, nonatomic) NSDictionary *resultAssetFileURLsByRemoteURL; // @synthesize resultAssetFileURLsByRemoteURL=_resultAssetFileURLsByRemoteURL;
@property(retain, nonatomic) NSDictionary *resultTodayItemsBySectionDescriptor; // @synthesize resultTodayItemsBySectionDescriptor=_resultTodayItemsBySectionDescriptor;
@property(copy, nonatomic) NSArray *feedItems; // @synthesize feedItems=_feedItems;
@property(copy, nonatomic) CDUnknownBlockType todayItemCompletion; // @synthesize todayItemCompletion=_todayItemCompletion;
@property(copy, nonatomic) NTCatchUpOperationForYouFetchInfo *forYouFetchInfo; // @synthesize forYouFetchInfo=_forYouFetchInfo;
@property(copy, nonatomic) id <NTTodayResultOperationInfoProviding> operationInfo; // @synthesize operationInfo=_operationInfo;
@property(retain, nonatomic) id <FCFeedPersonalizing> feedPersonalizer; // @synthesize feedPersonalizer=_feedPersonalizer;
@property(copy, nonatomic) NSDictionary *slotAllocationByDynamicSlotItemID; // @synthesize slotAllocationByDynamicSlotItemID=_slotAllocationByDynamicSlotItemID;
@property(copy, nonatomic) NSSet *itemIDsOfLeadingCells; // @synthesize itemIDsOfLeadingCells=_itemIDsOfLeadingCells;
@property(retain, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
@property(copy, nonatomic) id <FCNewsAppConfiguration> appConfiguration; // @synthesize appConfiguration=_appConfiguration;
@property(copy, nonatomic) NSDictionary *catchUpOperationResultsBySectionDescriptor; // @synthesize catchUpOperationResultsBySectionDescriptor=_catchUpOperationResultsBySectionDescriptor;
- (void).cxx_destruct;
- (void)_fetchProtoitemsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_extractFeedItemsFromInputs;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;
- (id)init;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlayerResponse, NSArray, NSDictionary;
@protocol MRUUpNextDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface MRUUpNextDataSource : NSObject
{
    MPCPlayerResponse *_response;
    id <MRUUpNextDataSourceDelegate> _delegate;
    NSArray *_responseItemIDs;
    NSDictionary *_responseItemsByIdentifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *responseItemsByIdentifier; // @synthesize responseItemsByIdentifier=_responseItemsByIdentifier;
@property(readonly, nonatomic) NSArray *responseItemIDs; // @synthesize responseItemIDs=_responseItemIDs;
@property(nonatomic) __weak id <MRUUpNextDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MPCPlayerResponse *response; // @synthesize response=_response;
- (void)updateContentItems;
- (void)removeResponseItemWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)canMoveResponseItemWithIdentifier:(id)arg1;
- (void)moveReponseItemWithIdentifier:(id)arg1 afterResponseItemWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)moveReponseItemToNextWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)playItemWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)responseItemForIdentifier:(id)arg1;
- (id)init;

@end


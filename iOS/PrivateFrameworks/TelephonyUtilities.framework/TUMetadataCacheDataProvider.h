//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, TUMetadataCacheDataProviderDelegate;

@interface TUMetadataCacheDataProvider : NSObject
{
    id <TUMetadataCacheDataProviderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_providerCache;
}

+ (id)classIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *providerCache; // @synthesize providerCache=_providerCache;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)description;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (void)refresh;
- (void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2;
- (void)setObject:(id)arg1 forDestinationID:(id)arg2;
- (id)metadataForDestinationID:(id)arg1;
@property(nonatomic) __weak id <TUMetadataCacheDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithQueue:(id)arg1;
- (id)init;

@end

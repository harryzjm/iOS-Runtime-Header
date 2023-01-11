//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EFFuture, EFLocked, EFPromise, NSProgress, NSString;
@protocol EMContentItem;

@interface MessageContentItemRepresentationTask : NSObject
{
    long long _networkUsage;
    id <EMContentItem> _contentItem;
    NSString *_type;
    NSProgress *_topLevelProgress;
    EFPromise *_contentRequestPromise;
    NSProgress *_contentRequestProgress;
    EFLocked *_invokerIDs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EFLocked *invokerIDs; // @synthesize invokerIDs=_invokerIDs;
@property(retain, nonatomic) NSProgress *contentRequestProgress; // @synthesize contentRequestProgress=_contentRequestProgress;
@property(retain, nonatomic) EFPromise *contentRequestPromise; // @synthesize contentRequestPromise=_contentRequestPromise;
@property(retain, nonatomic) NSProgress *topLevelProgress; // @synthesize topLevelProgress=_topLevelProgress;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) id <EMContentItem> contentItem; // @synthesize contentItem=_contentItem;
@property(nonatomic) long long networkUsage; // @synthesize networkUsage=_networkUsage;
- (void)resume;
- (_Bool)hasBeenAccessedByInvokerWithID:(id)arg1;
- (void)addAccessedByInvokerWithID:(id)arg1;
@property(readonly, nonatomic) EFFuture *future;
@property(readonly, nonatomic) NSProgress *progress;
- (id)initWithContentItem:(id)arg1 type:(id)arg2 networkUsage:(long long)arg3;

@end

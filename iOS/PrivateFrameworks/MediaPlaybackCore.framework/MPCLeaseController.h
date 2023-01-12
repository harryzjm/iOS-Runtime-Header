//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCMediaFoundationTranslator, _MPCLeaseManager;
@protocol MFPlaybackStackController;

__attribute__((visibility("hidden")))
@interface MPCLeaseController : NSObject
{
    id <MFPlaybackStackController> _stackController;
    MPCMediaFoundationTranslator *_translator;
    _MPCLeaseManager *_leaseManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _MPCLeaseManager *leaseManager; // @synthesize leaseManager=_leaseManager;
@property(readonly, nonatomic) MPCMediaFoundationTranslator *translator; // @synthesize translator=_translator;
@property(nonatomic) __weak id <MFPlaybackStackController> stackController; // @synthesize stackController=_stackController;
- (void)relinquishLeaseForItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestLeaseForItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithTranslator:(id)arg1 leaseManager:(id)arg2;

@end


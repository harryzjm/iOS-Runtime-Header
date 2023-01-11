//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPAVErrorResolverDelegate-Protocol.h>

@class MPAVErrorResolver, NSString;

@interface MPAVErrorResolverBlockHandler : NSObject <MPAVErrorResolverDelegate>
{
    MPAVErrorResolverBlockHandler *_strongSelf;
    MPAVErrorResolver *_errorResolver;
    CDUnknownBlockType _resolutionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType resolutionHandler; // @synthesize resolutionHandler=_resolutionHandler;
@property(readonly, nonatomic) MPAVErrorResolver *errorResolver; // @synthesize errorResolver=_errorResolver;
- (void)resolveError:(id)arg1;
- (void)errorResolver:(id)arg1 didResolveError:(id)arg2 withResolution:(long long)arg3;
- (id)initWithErrorResolver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

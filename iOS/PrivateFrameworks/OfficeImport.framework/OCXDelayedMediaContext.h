//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <OfficeImport/OCDDelayedMediaContext-Protocol.h>

@class NSString, NSURL, OCPPackage;

__attribute__((visibility("hidden")))
@interface OCXDelayedMediaContext : NSObject <OCDDelayedMediaContext>
{
    OCPPackage *mPackage;
    NSURL *mTargetLocation;
}

@property(readonly, copy) NSString *description;
- (id)dataRep;
- (_Bool)saveDelayedMedia:(id)arg1 toFile:(id)arg2;
- (_Bool)loadDelayedNode:(id)arg1;
- (void)dealloc;
- (id)initWithTargetLocation:(id)arg1 package:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NeutrinoKit/NURegionPolicy-Protocol.h>

@class NSString, NUViewport;

@interface NUViewportRegionPolicy : NSObject <NURegionPolicy>
{
    NUViewport *_viewport;
}

- (void).cxx_destruct;
- (id)regionForGeometry:(id)arg1;
- (id)initWithViewport:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


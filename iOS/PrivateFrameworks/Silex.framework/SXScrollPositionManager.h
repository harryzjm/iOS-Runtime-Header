//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXScrollPositionManager-Protocol.h>

@class NSString;
@protocol SXScrollPositionRestoring;

@interface SXScrollPositionManager : NSObject <SXScrollPositionManager>
{
    id <SXScrollPositionRestoring> _scrollPositionRestoring;
}

@property(nonatomic) __weak id <SXScrollPositionRestoring> scrollPositionRestoring; // @synthesize scrollPositionRestoring=_scrollPositionRestoring;
- (void).cxx_destruct;
- (void)updateScrollPosition:(id)arg1 animated:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


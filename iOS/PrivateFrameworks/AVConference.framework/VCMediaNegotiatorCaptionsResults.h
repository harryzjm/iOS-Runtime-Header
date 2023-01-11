//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorCaptionsResults : NSObject
{
    _Bool _isSupported;
    _Bool _remoteCanDisplayCaptions;
    NSSet *_localLanguages;
    NSSet *_remoteLanguages;
}

@property(nonatomic) _Bool isSupported; // @synthesize isSupported=_isSupported;
@property(nonatomic) _Bool remoteCanDisplayCaptions; // @synthesize remoteCanDisplayCaptions=_remoteCanDisplayCaptions;
@property(retain, nonatomic) NSSet *remoteLanguages; // @synthesize remoteLanguages=_remoteLanguages;
@property(retain, nonatomic) NSSet *localLanguages; // @synthesize localLanguages=_localLanguages;
- (void)dealloc;

@end


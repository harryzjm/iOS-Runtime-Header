//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURLComponents, _LSAppLinkOpenState;

__attribute__((visibility("hidden")))
@interface _LSAppLinkPlugIn : NSObject
{
    NSURLComponents *_URLComponents;
    unsigned long long _limit;
    _LSAppLinkOpenState *_state;
}

+ (_Bool)canHandleURLComponents:(id)arg1;
+ (id)plugInClasses;
- (void).cxx_destruct;
@property(retain) _LSAppLinkOpenState *state; // @synthesize state=_state;
@property unsigned long long limit; // @synthesize limit=_limit;
@property(retain) NSURLComponents *URLComponents; // @synthesize URLComponents=_URLComponents;
- (id)appLinksWithContext:(struct LSContext *)arg1 error:(id *)arg2;

@end


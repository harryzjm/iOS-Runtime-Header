//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@protocol TSUTraceableResourceToken;

__attribute__((visibility("hidden")))
@interface TSUIgnoreInteractionEventsSafeWrapper : NSObject
{
    id <TSUTraceableResourceToken> _token;
    CDUnknownBlockType _operationCompletionHandler;
}

- (void).cxx_destruct;
- (id)description;
- (void)resumeIgnoringInteractionEventsSafely;
- (void)suspendIgnoringInteractionEventsTemporarily;
- (void)endIgnoringInteractionEventsSafely;
- (void)dealloc;
- (id)initWithToken:(id)arg1;
- (id)init;

@end

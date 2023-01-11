//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebInspectorFrontend : NSObject
{
    NakedPtr_fc424271 m_frontendClient;
}

- (id).cxx_construct;
- (void)showConsole;
- (void)setTimelineProfilingEnabled:(_Bool)arg1;
- (_Bool)isTimelineProfilingEnabled;
- (void)stopProfilingJavaScript;
- (void)startProfilingJavaScript;
- (_Bool)isProfilingJavaScript;
- (void)setDebuggingEnabled:(_Bool)arg1;
- (_Bool)isDebuggingEnabled;
- (void)close;
- (void)detach;
- (void)attach;
- (id)initWithFrontendClient:(NakedPtr_fc424271)arg1;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SilexWeb/NSObject-Protocol.h>

@protocol SWScript;

@protocol SWScriptsManager <NSObject>
- (void)executeScript:(id <SWScript>)arg1 completion:(void (^)(void))arg2;
- (void)removeScript:(id <SWScript>)arg1;
- (void)removeAllScripts;
- (void)addScript:(id <SWScript>)arg1;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSError, NSString;

@protocol IKAppScriptFallbackHandler <NSObject>
- (void)scriptEvaluated:(NSString *)arg1;
- (NSString *)retrieveScript:(id *)arg1;
- (_Bool)canFallbackForError:(NSError *)arg1;
@end


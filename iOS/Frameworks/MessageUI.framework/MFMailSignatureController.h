//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface MFMailSignatureController : NSObject
{
}

- (void)finalizeSignatureForBodyField:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateSignatureForSender:(id)arg1 bodyField:(id)arg2;
- (void)removeSignatureForSender:(id)arg1 bodyField:(id)arg2;
- (void)addSignatureForSender:(id)arg1 bodyField:(id)arg2 prepend:(_Bool)arg3;
- (_Bool)isDefaultSignatureForSender:(id)arg1;
- (id)_signatureStringForSender:(id)arg1;

@end


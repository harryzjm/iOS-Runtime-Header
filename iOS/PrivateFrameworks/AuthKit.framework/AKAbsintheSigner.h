//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface AKAbsintheSigner : NSObject
{
    NSDate *_contextCreationDate;
}

+ (id)sharedSigner;
- (void).cxx_destruct;
- (void)signatureForURLRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)signatureForURLRequest:(id)arg1;

@end


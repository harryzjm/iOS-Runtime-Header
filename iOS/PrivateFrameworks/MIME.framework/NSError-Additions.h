//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

#import <MIME/MFPubliclyDescribable-Protocol.h>

@class NSString;

@interface NSError (Additions) <MFPubliclyDescribable>
+ (void)mf_setDecoder:(CDUnknownBlockType)arg1 forDomain:(id)arg2;
@property(readonly, copy, nonatomic) NSString *mf_publicDescription;
- (CDUnknownBlockType)mf_match;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

#import <CloudKitDaemon/CKLParsedObject-Protocol.h>

@class NSString;

@interface NSDictionary (CloudKitExtensions) <CKLParsedObject>
- (id)CKObjectForKeyCaseInsensitive:(id)arg1;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;
- (id)CKPercentEscapedQueryString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

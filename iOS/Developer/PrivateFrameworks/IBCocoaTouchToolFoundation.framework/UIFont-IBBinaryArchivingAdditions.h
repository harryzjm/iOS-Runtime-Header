//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIFont.h>

#import <IBCocoaTouchToolFoundation/IBBinaryArchiving-Protocol.h>

@class NSString;

@interface UIFont (IBBinaryArchivingAdditions) <IBBinaryArchiving>
+ (id)decodeWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (const char *)cStringClassNameForBinaryArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

#import <ReminderKit/CRCoding-Protocol.h>
#import <ReminderKit/CRDataType-Protocol.h>
#import <ReminderKit/CREquatable-Protocol.h>
#import <ReminderKit/REMDAChangedIdentifierResult-Protocol.h>

@interface NSString (ReminderKitAdditions) <REMDAChangedIdentifierResult, CRDataType, CREquatable, CRCoding>
+ (void)rem_registerClassAtCRCoderIfNeeded;
- (id)rem_removingTel;
- (id)rem_addingTel;
- (_Bool)rem_hasTel;
- (id)rem_removingMailto;
- (id)rem_addingMailto;
- (_Bool)rem_hasMailto;
- (_Bool)rem_hasPrefixCaseInsensitive:(id)arg1;
- (id)rem_tidyFormattedNameString;
- (id)tombstone;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)encodeWithCRCoder:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (void)mergeWith:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

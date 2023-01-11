//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

@interface CNUICoreContactScratchpad : NSObject
{
    NSSet *_edits;
}

+ (id)scratchpadByRemovingModifiedContact:(id)arg1 fromScratchpad:(id)arg2;
+ (id)editsByReplacingEdit:(id)arg1 withUpdatedEdit:(id)arg2 inEdits:(id)arg3;
+ (id)editMatchingContact:(id)arg1 inEdits:(id)arg2;
+ (id)scratchpadBySettingModifiedContact:(id)arg1 onExistingEditInScratchpad:(id)arg2;
+ (id)scratchpadByAddingUneditedContact:(id)arg1 toScratchpad:(id)arg2;
+ (id)emptyScratchpad;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *edits; // @synthesize edits=_edits;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSSet *allContacts;
@property(readonly, nonatomic) NSSet *modifiedContacts;
- (_Bool)containsContact:(id)arg1;
- (id)modifiedIfPresentOtherwiseOriginalContactForContact:(id)arg1;
- (id)modifiedContactForContact:(id)arg1;
- (id)scratchpadByKeepingContacts:(id)arg1;
- (id)scratchpadByRemovingContacts:(id)arg1;
- (id)scratchpadByAddingContacts:(id)arg1;
- (id)initWithEdits:(id)arg1;
- (id)init;

@end

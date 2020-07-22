//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface IBICSlotSuggestionSet : NSObject
{
    Class _slotClass;
    NSString *_groupIdentifier;
    NSString *_title;
    NSString *_identifier;
    double _displayOrder;
    NSSet *_actions;
}

+ (id)suggestionSetWithIdentifier:(id)arg1 addingSlots:(id)arg2 groupID:(id)arg3 title:(id)arg4 displayOrder:(double)arg5;
+ (id)suggestionSetWithIdentifier:(id)arg1 slotClass:(Class)arg2 groupID:(id)arg3 title:(id)arg4 displayOrder:(double)arg5 actions:(id)arg6;
@property(readonly) NSSet *actions; // @synthesize actions=_actions;
@property(readonly) double displayOrder; // @synthesize displayOrder=_displayOrder;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSString *title; // @synthesize title=_title;
@property(readonly) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(readonly) Class slotClass; // @synthesize slotClass=_slotClass;
- (void).cxx_destruct;
- (void)ibic_generateAttributes:(CDUnknownBlockType)arg1;
- (void)ibic_generateSubNodes:(CDUnknownBlockType)arg1;
- (long long)compareDisplayOrder:(id)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 slotClass:(Class)arg2 groupID:(id)arg3 title:(id)arg4 displayOrder:(double)arg5 actions:(id)arg6;

@end

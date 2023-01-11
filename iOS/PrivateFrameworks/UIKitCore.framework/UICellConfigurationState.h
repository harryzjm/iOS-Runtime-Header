//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UICellConfigurationStateReadonly-Protocol.h>

@interface UICellConfigurationState <_UICellConfigurationStateReadonly>
{
    struct {
        unsigned int isEditing:1;
        unsigned int isExpanded:1;
        unsigned int isSwiped:1;
        unsigned int isReordering:1;
        unsigned int cellDragState:2;
        unsigned int cellDropState:2;
    } _cellStateFlags;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long _viewConfigurationState;
@property(nonatomic) long long cellDropState;
@property(nonatomic) long long cellDragState;
@property(nonatomic, getter=isReordering) _Bool reordering;
@property(nonatomic, getter=isSwiped) _Bool swiped;
@property(nonatomic, getter=isExpanded) _Bool expanded;
@property(nonatomic, getter=isEditing) _Bool editing;
- (void)_appendPropertiesForDescription:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithState:(id)arg1;

// Remaining properties
@property(readonly, nonatomic, getter=isDisabled) _Bool disabled;
@property(readonly, nonatomic, getter=isFocused) _Bool focused;
@property(readonly, nonatomic, getter=isHighlighted) _Bool highlighted;
@property(readonly, nonatomic, getter=isSelected) _Bool selected;

@end

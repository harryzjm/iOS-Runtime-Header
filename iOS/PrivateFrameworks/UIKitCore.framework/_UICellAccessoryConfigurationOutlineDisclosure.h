//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor, UIImage;

@interface _UICellAccessoryConfigurationOutlineDisclosure
{
    _Bool _cellSelectionTogglesExpansionState;
    double _rotationAngle;
    UIColor *_selectedTintColor;
    UIImage *__customImage;
}

+ (_Bool)supportsSecureCoding;
+ (id)new;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *_customImage; // @synthesize _customImage=__customImage;
@property(retain, nonatomic) UIColor *selectedTintColor; // @synthesize selectedTintColor=_selectedTintColor;
@property(nonatomic) double rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property(readonly, nonatomic) _Bool cellSelectionTogglesExpansionState; // @synthesize cellSelectionTogglesExpansionState=_cellSelectionTogglesExpansionState;
@property(retain, nonatomic) UIImage *image;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_identifier;
- (long long)_systemType;
- (id)initWithCellSelectionTogglesExpansionState:(_Bool)arg1;
- (id)initWithImage:(id)arg1;
- (id)init;

@end

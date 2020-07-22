//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIInputViewSetPlacementDragToDismiss <NSSecureCoding>
{
    _Bool _dismissKeyboardOnly;
    double _offset;
}

+ (id)placementWithOffset:(double)arg1 dismissKeyboardOnly:(_Bool)arg2;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool dismissKeyboardOnly; // @synthesize dismissKeyboardOnly=_dismissKeyboardOnly;
@property(nonatomic) double offset; // @synthesize offset=_offset;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isInteractive;
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)applicatorClassForKeyboard:(_Bool)arg1;

@end


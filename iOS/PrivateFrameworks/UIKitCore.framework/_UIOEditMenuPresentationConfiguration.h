//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIMenu;

__attribute__((visibility("hidden")))
@interface _UIOEditMenuPresentationConfiguration : NSObject
{
    _Bool _enforcesMenuControllerLifecycle;
    NSString *_identifier;
    UIMenu *_menu;
    long long _preferredArrowDirection;
    long long _initialUserInterfaceStyle;
    struct CGRect _sourceRect;
    struct CGRect _targetRect;
}

+ (id)configurationWithMenu:(id)arg1 preferredArrowDirection:(long long)arg2 sourceRect:(struct CGRect)arg3 enforcesMenuControllerLifecycle:(_Bool)arg4 initialUserInterfaceStyle:(long long)arg5;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long initialUserInterfaceStyle; // @synthesize initialUserInterfaceStyle=_initialUserInterfaceStyle;
@property(readonly, nonatomic) long long preferredArrowDirection; // @synthesize preferredArrowDirection=_preferredArrowDirection;
@property(readonly, nonatomic) _Bool enforcesMenuControllerLifecycle; // @synthesize enforcesMenuControllerLifecycle=_enforcesMenuControllerLifecycle;
@property(readonly, nonatomic) struct CGRect targetRect; // @synthesize targetRect=_targetRect;
@property(readonly, nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(readonly, nonatomic) UIMenu *menu; // @synthesize menu=_menu;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)configurationWithTargetOrigin:(struct CGPoint)arg1;

@end


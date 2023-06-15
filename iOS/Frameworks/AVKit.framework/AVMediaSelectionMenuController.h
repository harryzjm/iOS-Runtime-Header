//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UIMenu;
@protocol AVMediaSelectionMenuDelegate;

__attribute__((visibility("hidden")))
@interface AVMediaSelectionMenuController : NSObject
{
    UIMenu *_audibleOptionsMenu;
    UIMenu *_legibleOptionsMenu;
    NSArray *_audibleOptions;
    NSArray *_legibleOptions;
    unsigned long long _currentAudibleOptionIndex;
    unsigned long long _currentLegibleOptionIndex;
    id <AVMediaSelectionMenuDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <AVMediaSelectionMenuDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long currentLegibleOptionIndex; // @synthesize currentLegibleOptionIndex=_currentLegibleOptionIndex;
@property(nonatomic) unsigned long long currentAudibleOptionIndex; // @synthesize currentAudibleOptionIndex=_currentAudibleOptionIndex;
@property(copy, nonatomic) NSArray *legibleOptions; // @synthesize legibleOptions=_legibleOptions;
@property(copy, nonatomic) NSArray *audibleOptions; // @synthesize audibleOptions=_audibleOptions;
- (void)_updateSelectionStateForMenu:(id)arg1 selectedIndex:(unsigned long long)arg2;
- (id)_menuForOptions:(id)arg1 withIdentifier:(id)arg2;
- (id)_displayNameForMediaSelectionOption:(id)arg1;
@property(readonly, nonatomic) UIMenu *legibleOptionsMenu;
@property(readonly, nonatomic) UIMenu *audibleOptionsMenu;
- (id)initWithAudibleOptions:(id)arg1 legibleOptions:(id)arg2;

@end


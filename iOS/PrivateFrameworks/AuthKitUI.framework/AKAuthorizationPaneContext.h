//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAuthorizationPaneViewController, NSMutableArray, UIStackView;

@interface AKAuthorizationPaneContext : NSObject
{
    AKAuthorizationPaneViewController *_paneViewController;
    UIStackView *_stackView;
    NSMutableArray *_internalMutableConstraints;
}

@property(retain, nonatomic) NSMutableArray *internalMutableConstraints; // @synthesize internalMutableConstraints=_internalMutableConstraints;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly, nonatomic) AKAuthorizationPaneViewController *paneViewController; // @synthesize paneViewController=_paneViewController;
- (void).cxx_destruct;
- (void)addSubPane:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *mutableConstraints;
- (id)initWithPaneViewController:(id)arg1 stackView:(id)arg2 mutableConstraints:(id)arg3;
- (id)initWithPaneViewController:(id)arg1 stackView:(id)arg2;

@end

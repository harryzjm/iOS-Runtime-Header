//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface LAPasscodeChangeServiceEnvironmentUIConfig : NSObject
{
    UIViewController *_parentVC;
    NSString *_title;
    NSString *_passcodePrompt;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *passcodePrompt; // @synthesize passcodePrompt=_passcodePrompt;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) UIViewController *parentVC; // @synthesize parentVC=_parentVC;
- (id)initWithParentVC:(id)arg1;

@end


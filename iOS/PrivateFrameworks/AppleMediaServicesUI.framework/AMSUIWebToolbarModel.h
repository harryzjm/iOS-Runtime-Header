//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSUIWebButtonModel, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebToolbarModel : NSObject
{
    AMSUIWebButtonModel *_leftButton;
    AMSUIWebButtonModel *_rightButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AMSUIWebButtonModel *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) AMSUIWebButtonModel *leftButton; // @synthesize leftButton=_leftButton;
@property(readonly, copy) NSString *description;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


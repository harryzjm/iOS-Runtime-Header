//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/AAUISpinnerController-Protocol.h>

@class NSString, PSSpecifier;

@interface AAUISpecifierSpinnerController : NSObject <AAUISpinnerController>
{
    PSSpecifier *_specifier;
}

- (void).cxx_destruct;
- (void)stopSpinning;
- (void)startSpinning;
- (id)initWithSpecifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSMachPortSendRight, NSArray, NSString, NSUUID, UITraitCollection;

__attribute__((visibility("hidden")))
@interface _UIViewServiceViewControllerOperatorCreateOptions : NSObject
{
    _Bool _hostCanDynamicallySpecifySupportedInterfaceOrientations;
    NSString *_viewControllerClassName;
    NSArray *_serializedAppearanceRepresentations;
    NSUUID *_contextToken;
    NSArray *_displayConfigurations;
    UITraitCollection *_traitCollection;
    BSMachPortSendRight *_hostAccessibilityServerPort;
    long long _availableTextServices;
    long long _initialInterfaceOrientation;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool hostCanDynamicallySpecifySupportedInterfaceOrientations; // @synthesize hostCanDynamicallySpecifySupportedInterfaceOrientations=_hostCanDynamicallySpecifySupportedInterfaceOrientations;
@property(nonatomic) long long initialInterfaceOrientation; // @synthesize initialInterfaceOrientation=_initialInterfaceOrientation;
@property(nonatomic) long long availableTextServices; // @synthesize availableTextServices=_availableTextServices;
@property(retain, nonatomic) BSMachPortSendRight *hostAccessibilityServerPort; // @synthesize hostAccessibilityServerPort=_hostAccessibilityServerPort;
@property(retain, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(copy, nonatomic) NSArray *displayConfigurations; // @synthesize displayConfigurations=_displayConfigurations;
@property(retain, nonatomic) NSUUID *contextToken; // @synthesize contextToken=_contextToken;
@property(copy, nonatomic) NSArray *serializedAppearanceRepresentations; // @synthesize serializedAppearanceRepresentations=_serializedAppearanceRepresentations;
@property(copy, nonatomic) NSString *viewControllerClassName; // @synthesize viewControllerClassName=_viewControllerClassName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end


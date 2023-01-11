//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarPlay/CPTabBarClientTemplateDelegate-Protocol.h>

@class CPInterfaceController, CPTemplate, NAFuture, NSArray, NSString;
@protocol CPTabBarTemplateDelegate, CPTabBarTemplateProviding;

@interface CPTabBarTemplate <CPTabBarClientTemplateDelegate>
{
    id <CPTabBarTemplateDelegate> _delegate;
    NSArray *_templates;
    unsigned long long _indexOfSelectedTab;
    id <CPTabBarTemplateProviding> _templateProvider;
    CPInterfaceController *_interfaceController;
}

+ (unsigned long long)maximumTabCount;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) __weak CPInterfaceController *interfaceController; // @synthesize interfaceController=_interfaceController;
@property(retain, nonatomic) id <CPTabBarTemplateProviding> templateProvider; // @synthesize templateProvider=_templateProvider;
@property(nonatomic) unsigned long long indexOfSelectedTab; // @synthesize indexOfSelectedTab=_indexOfSelectedTab;
@property(readonly, nonatomic) NSArray *templates; // @synthesize templates=_templates;
@property(nonatomic) __weak id <CPTabBarTemplateDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setTrailingNavigationBarButtons:(id)arg1;
- (id)trailingNavigationBarButtons;
- (void)setLeadingNavigationBarButtons:(id)arg1;
- (id)leadingNavigationBarButtons;
- (void)handleActionForControlIdentifier:(id)arg1;
@property(readonly, nonatomic) CPTemplate *selectedTemplate;
- (void)validateTemplates:(id)arg1;
- (void)updateTemplates:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTemplates:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) NAFuture *templateProviderFuture; // @dynamic templateProviderFuture;

@end

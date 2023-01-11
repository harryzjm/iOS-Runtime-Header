//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCoding-Protocol.h>
#import <UIKitCore/NSCopying-Protocol.h>

@class NSMutableDictionary, NSString, UIKBAutoFillTestExpectedResult, UINavigationItem, UIView;

__attribute__((visibility("hidden")))
@interface UIKBAutoFillTestArchive : NSObject <NSCoding, NSCopying>
{
    NSMutableDictionary *_tableViewTagToDataSource;
    _Bool _requiresNavigationControllerNesting;
    UIKBAutoFillTestExpectedResult *_expectedResult;
    UIView *_snapshotView;
    NSString *_viewControllerClassName;
    NSString *_viewControllerTitle;
    NSString *_navigationControllerClassName;
    NSString *_presentingViewControllerClassName;
    UINavigationItem *_viewControllerNavigationItem;
}

+ (id)autoFillTestArchiveWithData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UINavigationItem *viewControllerNavigationItem; // @synthesize viewControllerNavigationItem=_viewControllerNavigationItem;
@property(copy, nonatomic) NSString *presentingViewControllerClassName; // @synthesize presentingViewControllerClassName=_presentingViewControllerClassName;
@property(copy, nonatomic) NSString *navigationControllerClassName; // @synthesize navigationControllerClassName=_navigationControllerClassName;
@property(nonatomic) _Bool requiresNavigationControllerNesting; // @synthesize requiresNavigationControllerNesting=_requiresNavigationControllerNesting;
@property(copy, nonatomic) NSString *viewControllerTitle; // @synthesize viewControllerTitle=_viewControllerTitle;
@property(copy, nonatomic) NSString *viewControllerClassName; // @synthesize viewControllerClassName=_viewControllerClassName;
@property(retain, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(retain, nonatomic) UIKBAutoFillTestExpectedResult *expectedResult; // @synthesize expectedResult=_expectedResult;
- (void)setTableViewDataSource:(id)arg1 forTableViewWithTag:(long long)arg2;
- (id)tableViewDataSourceWithTag:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)autoFillTestArchiveData;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

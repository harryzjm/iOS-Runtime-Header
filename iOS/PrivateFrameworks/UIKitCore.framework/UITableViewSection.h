//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCoding-Protocol.h>

@class NSArray, NSString, UIView;

@interface UITableViewSection : NSObject <NSCoding>
{
    NSString *_headerTitle;
    UIView *_headerView;
    NSString *_footerTitle;
    UIView *_footerView;
    NSArray *_rows;
}

+ (id)sectionWithRows:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *rows; // @synthesize rows=_rows;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(copy, nonatomic) NSString *footerTitle; // @synthesize footerTitle=_footerTitle;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

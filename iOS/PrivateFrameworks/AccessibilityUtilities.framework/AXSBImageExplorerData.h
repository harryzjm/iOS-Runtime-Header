//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface AXSBImageExplorerData : NSObject <NSSecureCoding>
{
    NSString *_hostAppBundleID;
    NSString *_hostAppName;
    NSString *_axLabel;
    NSArray *_customContent;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *customContent; // @synthesize customContent=_customContent;
@property(retain, nonatomic) NSString *axLabel; // @synthesize axLabel=_axLabel;
@property(retain, nonatomic) NSString *hostAppName; // @synthesize hostAppName=_hostAppName;
@property(retain, nonatomic) NSString *hostAppBundleID; // @synthesize hostAppBundleID=_hostAppBundleID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

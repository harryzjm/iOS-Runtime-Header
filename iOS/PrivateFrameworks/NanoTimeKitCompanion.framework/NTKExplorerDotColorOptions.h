//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSCopying-Protocol.h>
#import <NanoTimeKitCompanion/NSSecureCoding-Protocol.h>

@class UIColor;

@interface NTKExplorerDotColorOptions : NSObject <NSCopying, NSSecureCoding>
{
    UIColor *_connectedDotColor;
    UIColor *_connectedDotBackgroundColor;
    UIColor *_noServiceDotColor;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) UIColor *noServiceDotColor; // @synthesize noServiceDotColor=_noServiceDotColor;
@property(retain, nonatomic) UIColor *connectedDotBackgroundColor; // @synthesize connectedDotBackgroundColor=_connectedDotBackgroundColor;
@property(retain, nonatomic) UIColor *connectedDotColor; // @synthesize connectedDotColor=_connectedDotColor;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKColor;

@interface SKUIPlaceholderImageKey : NSObject
{
    long long _height;
    long long _imageTreatment;
    long long _width;
    IKColor *_placeholderBackgroundColor;
}

- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithSize:(struct CGSize)arg1 imageTreatment:(long long)arg2 placeholderBackgroundColor:(id)arg3;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSUtility/NSCopying-Protocol.h>
#import <TSUtility/TSUDataFormat-Protocol.h>

@class NSString;

@interface TSUDateFormat : NSObject <NSCopying, TSUDataFormat>
{
    NSString *mFormat;
    NSString *mName;
}

+ (id)formatWithFormat:(id)arg1 name:(id)arg2;
- (void)setFormatName:(id)arg1;
- (id)formatName;
- (id)format;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFormat:(id)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString;

@interface SAWebAcePicture <SAAceSerializable>
{
}

+ (id)acePictureWithDictionary:(id)arg1 context:(id)arg2;
+ (id)acePicture;
@property(copy, nonatomic) NSNumber *width;
@property(copy, nonatomic) NSNumber *height;
@property(copy, nonatomic) NSString *format;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class AVWeakReference, NSError, NSString;
@protocol NSObject><NSCopying;

@interface AVMetadataItemValueRequestInternal : NSObject
{
    AVWeakReference *weakReferenceToMetadataItem;
    id <NSObject><NSCopying> value;
    NSString *dataType;
    NSError *error;
}

@end


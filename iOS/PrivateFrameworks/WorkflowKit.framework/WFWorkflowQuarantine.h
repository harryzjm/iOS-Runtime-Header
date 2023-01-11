//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSCopying-Protocol.h>

@class NSDate, NSString;

@interface WFWorkflowQuarantine : NSObject <NSCopying>
{
    NSString *_sourceAppIdentifier;
    NSDate *_importDate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *importDate; // @synthesize importDate=_importDate;
@property(readonly, copy, nonatomic) NSString *sourceAppIdentifier; // @synthesize sourceAppIdentifier=_sourceAppIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)serializedRepresentation;
- (id)serializedData;
- (id)initWithSerializedData:(id)arg1;
- (id)initWithSourceAppIdentifier:(id)arg1 importDate:(id)arg2;

@end

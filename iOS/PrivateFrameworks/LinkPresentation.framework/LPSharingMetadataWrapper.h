//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <LinkPresentation/NSSecureCoding-Protocol.h>

@class LPLinkMetadata;

@interface LPSharingMetadataWrapper : NSObject <NSSecureCoding>
{
    _Bool _hasFetchedSubresources;
    LPLinkMetadata *_metadata;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool hasFetchedSubresources; // @synthesize hasFetchedSubresources=_hasFetchedSubresources;
@property(retain, nonatomic) LPLinkMetadata *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dataRepresentation;

@end


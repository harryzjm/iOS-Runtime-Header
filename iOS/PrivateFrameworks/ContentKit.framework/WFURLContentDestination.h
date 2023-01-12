//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContentKit/NSCopying-Protocol.h>
#import <ContentKit/NSSecureCoding-Protocol.h>
#import <ContentKit/WFSerializableContent-Protocol.h>

@class NSSet, NSString;

@interface WFURLContentDestination <NSSecureCoding, NSCopying, WFSerializableContent>
{
    NSString *_localizedTitle;
    NSSet *_hostnames;
}

+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)invalidHostnameErrorForInputURL:(id)arg1;
+ (id)destinationWithURLs:(id)arg1 error:(id *)arg2;
+ (id)destinationWithURL:(id)arg1 error:(id *)arg2;
+ (id)destinationWithHostnames:(id)arg1;
+ (id)destinationWithHostname:(id)arg1;
+ (id)wordpressDestination;
+ (id)tumblrDestination;
+ (id)trelloDestination;
+ (id)todoistDestination;
+ (id)pocketDestination;
+ (id)pinboardDestination;
+ (id)microsoftCognitiveServicesDestination;
+ (id)instapaperDestination;
+ (id)imgurDestination;
+ (id)giphyDestination;
+ (id)evernoteDestination;
+ (id)cloudappDestination;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *hostnames; // @synthesize hostnames=_hostnames;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)wfSerializedRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)managedLevel;
- (id)localizedTitle;
- (id)hostnamesSortedAlphabetically;
- (id)initWithHostnames:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

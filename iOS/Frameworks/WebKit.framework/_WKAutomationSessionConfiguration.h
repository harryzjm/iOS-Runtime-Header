//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/NSCopying-Protocol.h>

@interface _WKAutomationSessionConfiguration : NSObject <NSCopying>
{
    _Bool _allowsInsecureMediaCapture;
    _Bool _suppressesICECandidateFiltering;
}

@property(nonatomic) _Bool suppressesICECandidateFiltering; // @synthesize suppressesICECandidateFiltering=_suppressesICECandidateFiltering;
@property(nonatomic) _Bool allowsInsecureMediaCapture; // @synthesize allowsInsecureMediaCapture=_allowsInsecureMediaCapture;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

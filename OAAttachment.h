//
//  OAAttachment.h
//  Zeus
//
//  Created by Jamie Pinkham on 2/3/11.
//  Copyright 2011 Tumblr. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface OAAttachment : NSObject {
	NSString *name;
	NSString *fileName;
	NSString *contentType;
	NSData *data;
}

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *fileName;
@property (nonatomic, strong) NSString *contentType;
@property (nonatomic, strong) NSData *data;

- (id)initWithName:(NSString *)aName filename:(NSString *)aFilename contentType:(NSString *)aContentType data:(NSData *)aData;

@end
